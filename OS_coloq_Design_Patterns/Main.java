import AbsFactory.Calculator;
import AbsFactory.Creator;
import AbsFactory.Seller;
import AbsFactory.ShopWorkersFactory;
import DIY_store.DIYShopWorkersFactory;
import Pharmacy.PharmacyWorkersFactory;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        //ShopWorkersFactory swf = new DIYShopWorkersFactory();
        ShopWorkersFactory swf = new PharmacyWorkersFactory();

        Creator creator = swf.getCreator();
        Seller seller = swf.getSeller();
        Calculator calculator = swf.getCalculator();

        System.out.println("Produced: " + creator.produceItem()
                + " Amount: " + calculator.calc()
                + " Price: " + seller.sell());
    }
}