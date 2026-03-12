@isTest
private class OASServiceTypesTest {
    @isTest
    private static void equalsSameInstance() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = serviceTypes1;
        OASServiceTypes serviceTypes3 = new OASServiceTypes();
        OASServiceTypes serviceTypes4 = serviceTypes3;

        System.assert(serviceTypes1.equals(serviceTypes2));
        System.assert(serviceTypes2.equals(serviceTypes1));
        System.assert(serviceTypes1.equals(serviceTypes1));
        System.assert(serviceTypes3.equals(serviceTypes4));
        System.assert(serviceTypes4.equals(serviceTypes3));
        System.assert(serviceTypes3.equals(serviceTypes3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes3 = new OASServiceTypes();
        OASServiceTypes serviceTypes4 = new OASServiceTypes();

        System.assert(serviceTypes1.equals(serviceTypes2));
        System.assert(serviceTypes2.equals(serviceTypes1));
        System.assert(serviceTypes3.equals(serviceTypes4));
        System.assert(serviceTypes4.equals(serviceTypes3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = new OASServiceTypes();

        System.assertEquals(false, serviceTypes1.equals('foo'));
        System.assertEquals(false, serviceTypes2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = new OASServiceTypes();
        OASServiceTypes serviceTypes3;

        System.assertEquals(false, serviceTypes1.equals(serviceTypes3));
        System.assertEquals(false, serviceTypes2.equals(serviceTypes3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = new OASServiceTypes();

        System.assertEquals(serviceTypes1.hashCode(), serviceTypes1.hashCode());
        System.assertEquals(serviceTypes2.hashCode(), serviceTypes2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASServiceTypes serviceTypes1 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes2 = OASServiceTypes.getExample();
        OASServiceTypes serviceTypes3 = new OASServiceTypes();
        OASServiceTypes serviceTypes4 = new OASServiceTypes();

        System.assert(serviceTypes1.equals(serviceTypes2));
        System.assert(serviceTypes3.equals(serviceTypes4));
        System.assertEquals(serviceTypes1.hashCode(), serviceTypes2.hashCode());
        System.assertEquals(serviceTypes3.hashCode(), serviceTypes4.hashCode());
    }
}
