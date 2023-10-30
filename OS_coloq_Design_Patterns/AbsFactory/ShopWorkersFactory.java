package AbsFactory;

import AbsFactory.Calculator;
import AbsFactory.Creator;
import AbsFactory.Seller;

public interface ShopWorkersFactory {
    Seller getSeller();
    Creator getCreator();
    Calculator getCalculator();
}
