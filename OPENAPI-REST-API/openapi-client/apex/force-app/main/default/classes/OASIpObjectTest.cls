@isTest
private class OASIpObjectTest {
    @isTest
    private static void equalsSameInstance() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = ipObject1;
        OASIpObject ipObject3 = new OASIpObject();
        OASIpObject ipObject4 = ipObject3;

        System.assert(ipObject1.equals(ipObject2));
        System.assert(ipObject2.equals(ipObject1));
        System.assert(ipObject1.equals(ipObject1));
        System.assert(ipObject3.equals(ipObject4));
        System.assert(ipObject4.equals(ipObject3));
        System.assert(ipObject3.equals(ipObject3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = OASIpObject.getExample();
        OASIpObject ipObject3 = new OASIpObject();
        OASIpObject ipObject4 = new OASIpObject();

        System.assert(ipObject1.equals(ipObject2));
        System.assert(ipObject2.equals(ipObject1));
        System.assert(ipObject3.equals(ipObject4));
        System.assert(ipObject4.equals(ipObject3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = new OASIpObject();

        System.assertEquals(false, ipObject1.equals('foo'));
        System.assertEquals(false, ipObject2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = new OASIpObject();
        OASIpObject ipObject3;

        System.assertEquals(false, ipObject1.equals(ipObject3));
        System.assertEquals(false, ipObject2.equals(ipObject3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = new OASIpObject();

        System.assertEquals(ipObject1.hashCode(), ipObject1.hashCode());
        System.assertEquals(ipObject2.hashCode(), ipObject2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASIpObject ipObject1 = OASIpObject.getExample();
        OASIpObject ipObject2 = OASIpObject.getExample();
        OASIpObject ipObject3 = new OASIpObject();
        OASIpObject ipObject4 = new OASIpObject();

        System.assert(ipObject1.equals(ipObject2));
        System.assert(ipObject3.equals(ipObject4));
        System.assertEquals(ipObject1.hashCode(), ipObject2.hashCode());
        System.assertEquals(ipObject3.hashCode(), ipObject4.hashCode());
    }
}
