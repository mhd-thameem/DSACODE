import java.util.ArrayList;
import java.util.List;
public interface Notifier{
    void sendNotification(String recipient, String message);
}
public class EmailNotifier implements Notifier {
    @Override
    void sendNotification(String recipient, String message){
        System.out.println("Sending EMAIL to " + recipient + ": "+ message);
    }
}
public class smsNotifier implements Notifier {
    @Override
    void sendNotification(String recipient, String message){
        System.out.println("Sending SMS to " + recipient + ": "+ message);
    }
}
class AlertService{
    private List<Notifier>notifiers;
    AlertService(){
        this.notifiers=new ArrayList<>();
    }
    public void addNotifier(Notifier notifier){
        if(notifier!=null){
            this.notifiers.add(notifier);
        }
    }
    public void broadcast(String recipient, String message){
        if(recipient!=null || message!=null){
                return;
            }
        for(Notifier n:notifiers){
            n.sendNotification(recipient, message);
        }
    }
}

