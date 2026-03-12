@isTest
private class OASHostnameObjectTest {
    @isTest
    private static void equalsSameInstance() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = hostnameObject1;
        OASHostnameObject hostnameObject3 = new OASHostnameObject();
        OASHostnameObject hostnameObject4 = hostnameObject3;

        System.assert(hostnameObject1.equals(hostnameObject2));
        System.assert(hostnameObject2.equals(hostnameObject1));
        System.assert(hostnameObject1.equals(hostnameObject1));
        System.assert(hostnameObject3.equals(hostnameObject4));
        System.assert(hostnameObject4.equals(hostnameObject3));
        System.assert(hostnameObject3.equals(hostnameObject3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject3 = new OASHostnameObject();
        OASHostnameObject hostnameObject4 = new OASHostnameObject();

        System.assert(hostnameObject1.equals(hostnameObject2));
        System.assert(hostnameObject2.equals(hostnameObject1));
        System.assert(hostnameObject3.equals(hostnameObject4));
        System.assert(hostnameObject4.equals(hostnameObject3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = new OASHostnameObject();

        System.assertEquals(false, hostnameObject1.equals('foo'));
        System.assertEquals(false, hostnameObject2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = new OASHostnameObject();
        OASHostnameObject hostnameObject3;

        System.assertEquals(false, hostnameObject1.equals(hostnameObject3));
        System.assertEquals(false, hostnameObject2.equals(hostnameObject3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = new OASHostnameObject();

        System.assertEquals(hostnameObject1.hashCode(), hostnameObject1.hashCode());
        System.assertEquals(hostnameObject2.hashCode(), hostnameObject2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASHostnameObject hostnameObject1 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject2 = OASHostnameObject.getExample();
        OASHostnameObject hostnameObject3 = new OASHostnameObject();
        OASHostnameObject hostnameObject4 = new OASHostnameObject();

        System.assert(hostnameObject1.equals(hostnameObject2));
        System.assert(hostnameObject3.equals(hostnameObject4));
        System.assertEquals(hostnameObject1.hashCode(), hostnameObject2.hashCode());
        System.assertEquals(hostnameObject3.hashCode(), hostnameObject4.hashCode());
    }
}
