from abc import ABC, abstractmethod
class cryptic(ABC):
    @abstractmethod
    def hash_data(self,input):
        pass
class SHA256_Sim(cryptic):
    def hash_data(self,input):
        print(f"SHA256: {input} parsed to hex blocks.")
s=SHA256_Sim()
s.hash_data("hello")