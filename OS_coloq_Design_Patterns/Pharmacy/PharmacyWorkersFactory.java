package Pharmacy;

import AbsFactory.Calculator;
import AbsFactory.Creator;
import AbsFactory.Seller;
import AbsFactory.ShopWorkersFactory;

public class PharmacyWorkersFactory implements ShopWorkersFactory {
    @Override
    public Seller getSeller() {
        return new Pharm_Seller();
    }

    @Override
    public Creator getCreator() {
        return new Pharm_Creator();
    }

    @Override
    public Calculator getCalculator() {
        return new Pharm_Calculator();
    }
}
