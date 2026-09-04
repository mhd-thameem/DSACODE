from abc import ABC, abstractmethod
class connection(ABC):
    @abstractmethod
    def connect(self):
        pass
class security(ABC):
    @abstractmethod
    def encrypt(self):
        pass
class NetworkNode(connection,security):
    def connect(self):
        print("Node connected to network.")
    def encrypt(self):
        print("Traffic encrypted via AES-256.")
N=NetworkNode()
N.connect()
N.encrypt()