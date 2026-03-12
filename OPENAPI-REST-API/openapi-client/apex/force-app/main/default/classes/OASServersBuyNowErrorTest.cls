@isTest
private class OASServersBuyNowErrorTest {
    @isTest
    private static void equalsSameInstance() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = serversBuyNowError1;
        OASServersBuyNowError serversBuyNowError3 = new OASServersBuyNowError();
        OASServersBuyNowError serversBuyNowError4 = serversBuyNowError3;

        System.assert(serversBuyNowError1.equals(serversBuyNowError2));
        System.assert(serversBuyNowError2.equals(serversBuyNowError1));
        System.assert(serversBuyNowError1.equals(serversBuyNowError1));
        System.assert(serversBuyNowError3.equals(serversBuyNowError4));
        System.assert(serversBuyNowError4.equals(serversBuyNowError3));
        System.assert(serversBuyNowError3.equals(serversBuyNowError3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError3 = new OASServersBuyNowError();
        OASServersBuyNowError serversBuyNowError4 = new OASServersBuyNowError();

        System.assert(serversBuyNowError1.equals(serversBuyNowError2));
        System.assert(serversBuyNowError2.equals(serversBuyNowError1));
        System.assert(serversBuyNowError3.equals(serversBuyNowError4));
        System.assert(serversBuyNowError4.equals(serversBuyNowError3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = new OASServersBuyNowError();

        System.assertEquals(false, serversBuyNowError1.equals('foo'));
        System.assertEquals(false, serversBuyNowError2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = new OASServersBuyNowError();
        OASServersBuyNowError serversBuyNowError3;

        System.assertEquals(false, serversBuyNowError1.equals(serversBuyNowError3));
        System.assertEquals(false, serversBuyNowError2.equals(serversBuyNowError3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = new OASServersBuyNowError();

        System.assertEquals(serversBuyNowError1.hashCode(), serversBuyNowError1.hashCode());
        System.assertEquals(serversBuyNowError2.hashCode(), serversBuyNowError2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServersBuyNowError serversBuyNowError1 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError2 = OASServersBuyNowError.getExample();
        OASServersBuyNowError serversBuyNowError3 = new OASServersBuyNowError();
        OASServersBuyNowError serversBuyNowError4 = new OASServersBuyNowError();

        System.assert(serversBuyNowError1.equals(serversBuyNowError2));
        System.assert(serversBuyNowError3.equals(serversBuyNowError4));
        System.assertEquals(serversBuyNowError1.hashCode(), serversBuyNowError2.hashCode());
        System.assertEquals(serversBuyNowError3.hashCode(), serversBuyNowError4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASServersBuyNowError serversBuyNowError = new OASServersBuyNowError();
        System.assertEquals(new List<String>(), serversBuyNowError.errors);
        System.assertEquals(null, serversBuyNowError.success);
        System.assertEquals(null, serversBuyNowError.text);
    }
}
