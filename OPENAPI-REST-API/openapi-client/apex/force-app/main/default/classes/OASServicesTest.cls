@isTest
private class OASServicesTest {
    @isTest
    private static void equalsSameInstance() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = services1;
        OASServices services3 = new OASServices();
        OASServices services4 = services3;

        System.assert(services1.equals(services2));
        System.assert(services2.equals(services1));
        System.assert(services1.equals(services1));
        System.assert(services3.equals(services4));
        System.assert(services4.equals(services3));
        System.assert(services3.equals(services3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = OASServices.getExample();
        OASServices services3 = new OASServices();
        OASServices services4 = new OASServices();

        System.assert(services1.equals(services2));
        System.assert(services2.equals(services1));
        System.assert(services3.equals(services4));
        System.assert(services4.equals(services3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = new OASServices();

        System.assertEquals(false, services1.equals('foo'));
        System.assertEquals(false, services2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = new OASServices();
        OASServices services3;

        System.assertEquals(false, services1.equals(services3));
        System.assertEquals(false, services2.equals(services3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = new OASServices();

        System.assertEquals(services1.hashCode(), services1.hashCode());
        System.assertEquals(services2.hashCode(), services2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServices services1 = OASServices.getExample();
        OASServices services2 = OASServices.getExample();
        OASServices services3 = new OASServices();
        OASServices services4 = new OASServices();

        System.assert(services1.equals(services2));
        System.assert(services3.equals(services4));
        System.assertEquals(services1.hashCode(), services2.hashCode());
        System.assertEquals(services3.hashCode(), services4.hashCode());
    }
}
