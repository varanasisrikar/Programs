class ProducerConsumer {
	int data;
	boolean flag;

	public synchronized void get() {
		if (flag == false) {
			try {
				this.wait();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		System.out.println("Get " + data);
		flag = false;
		notify();
	}

	public synchronized void put(int data) {
		if (flag == true) {
			try {
				this.wait();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		this.data = data;
		System.out.println("Put " + data);
		flag = true;
		notify();
	}
}

class Producer extends Thread {
	ProducerConsumer pc;

	public Producer(ProducerConsumer pc) {
		this.pc = pc;
		start();
	}

	public void run() {
		for (int i = 1; i <= 10; i++) {
			pc.put(i);
			try {
				sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}

class Consumer extends Thread {
	ProducerConsumer pc;

	public Consumer(ProducerConsumer pc) {
		this.pc = pc;
		start();
	}

	public void run() {
		for (int i = 1; i <= 10; i++) {
			pc.get();
			try {
				sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();

			}
		}
	}
}

public class TestProducerConsumer {
	public static void main(String[] args) {
		ProducerConsumer pc = new ProducerConsumer();
		Producer p = new Producer(pc);
		Consumer c = new Consumer(pc);
	}
}
