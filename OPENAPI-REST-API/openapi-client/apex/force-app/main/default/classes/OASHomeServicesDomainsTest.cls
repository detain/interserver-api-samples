@isTest
private class OASHomeServicesDomainsTest {
    @isTest
    private static void equalsSameInstance() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = homeServicesDomains1;
        OASHomeServicesDomains homeServicesDomains3 = new OASHomeServicesDomains();
        OASHomeServicesDomains homeServicesDomains4 = homeServicesDomains3;

        System.assert(homeServicesDomains1.equals(homeServicesDomains2));
        System.assert(homeServicesDomains2.equals(homeServicesDomains1));
        System.assert(homeServicesDomains1.equals(homeServicesDomains1));
        System.assert(homeServicesDomains3.equals(homeServicesDomains4));
        System.assert(homeServicesDomains4.equals(homeServicesDomains3));
        System.assert(homeServicesDomains3.equals(homeServicesDomains3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains3 = new OASHomeServicesDomains();
        OASHomeServicesDomains homeServicesDomains4 = new OASHomeServicesDomains();

        System.assert(homeServicesDomains1.equals(homeServicesDomains2));
        System.assert(homeServicesDomains2.equals(homeServicesDomains1));
        System.assert(homeServicesDomains3.equals(homeServicesDomains4));
        System.assert(homeServicesDomains4.equals(homeServicesDomains3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = new OASHomeServicesDomains();

        System.assertEquals(false, homeServicesDomains1.equals('foo'));
        System.assertEquals(false, homeServicesDomains2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = new OASHomeServicesDomains();
        OASHomeServicesDomains homeServicesDomains3;

        System.assertEquals(false, homeServicesDomains1.equals(homeServicesDomains3));
        System.assertEquals(false, homeServicesDomains2.equals(homeServicesDomains3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = new OASHomeServicesDomains();

        System.assertEquals(homeServicesDomains1.hashCode(), homeServicesDomains1.hashCode());
        System.assertEquals(homeServicesDomains2.hashCode(), homeServicesDomains2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHomeServicesDomains homeServicesDomains1 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains2 = OASHomeServicesDomains.getExample();
        OASHomeServicesDomains homeServicesDomains3 = new OASHomeServicesDomains();
        OASHomeServicesDomains homeServicesDomains4 = new OASHomeServicesDomains();

        System.assert(homeServicesDomains1.equals(homeServicesDomains2));
        System.assert(homeServicesDomains3.equals(homeServicesDomains4));
        System.assertEquals(homeServicesDomains1.hashCode(), homeServicesDomains2.hashCode());
        System.assertEquals(homeServicesDomains3.hashCode(), homeServicesDomains4.hashCode());
    }
}
