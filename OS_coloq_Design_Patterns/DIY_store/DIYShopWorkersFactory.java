package DIY_store;

import AbsFactory.Calculator;
import AbsFactory.Creator;
import AbsFactory.Seller;
import AbsFactory.ShopWorkersFactory;

public class DIYShopWorkersFactory implements ShopWorkersFactory {
    @Override
    public Seller getSeller() {
        return new DIY_Seller();
    }

    @Override
    public Creator getCreator() {
        return new DIY_Creator();
    }

    @Override
    public Calculator getCalculator() {
        return new DIY_Calculator();
    }
}
