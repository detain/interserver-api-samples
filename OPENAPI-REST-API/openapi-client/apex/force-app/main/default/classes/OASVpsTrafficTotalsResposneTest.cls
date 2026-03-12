@isTest
private class OASVpsTrafficTotalsResposneTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = vpsTrafficTotalsResposne1;
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne3 = new OASVpsTrafficTotalsResposne();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne4 = vpsTrafficTotalsResposne3;

        System.assert(vpsTrafficTotalsResposne1.equals(vpsTrafficTotalsResposne2));
        System.assert(vpsTrafficTotalsResposne2.equals(vpsTrafficTotalsResposne1));
        System.assert(vpsTrafficTotalsResposne1.equals(vpsTrafficTotalsResposne1));
        System.assert(vpsTrafficTotalsResposne3.equals(vpsTrafficTotalsResposne4));
        System.assert(vpsTrafficTotalsResposne4.equals(vpsTrafficTotalsResposne3));
        System.assert(vpsTrafficTotalsResposne3.equals(vpsTrafficTotalsResposne3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne3 = new OASVpsTrafficTotalsResposne();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne4 = new OASVpsTrafficTotalsResposne();

        System.assert(vpsTrafficTotalsResposne1.equals(vpsTrafficTotalsResposne2));
        System.assert(vpsTrafficTotalsResposne2.equals(vpsTrafficTotalsResposne1));
        System.assert(vpsTrafficTotalsResposne3.equals(vpsTrafficTotalsResposne4));
        System.assert(vpsTrafficTotalsResposne4.equals(vpsTrafficTotalsResposne3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = new OASVpsTrafficTotalsResposne();

        System.assertEquals(false, vpsTrafficTotalsResposne1.equals('foo'));
        System.assertEquals(false, vpsTrafficTotalsResposne2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = new OASVpsTrafficTotalsResposne();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne3;

        System.assertEquals(false, vpsTrafficTotalsResposne1.equals(vpsTrafficTotalsResposne3));
        System.assertEquals(false, vpsTrafficTotalsResposne2.equals(vpsTrafficTotalsResposne3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = new OASVpsTrafficTotalsResposne();

        System.assertEquals(vpsTrafficTotalsResposne1.hashCode(), vpsTrafficTotalsResposne1.hashCode());
        System.assertEquals(vpsTrafficTotalsResposne2.hashCode(), vpsTrafficTotalsResposne2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne1 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne2 = OASVpsTrafficTotalsResposne.getExample();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne3 = new OASVpsTrafficTotalsResposne();
        OASVpsTrafficTotalsResposne vpsTrafficTotalsResposne4 = new OASVpsTrafficTotalsResposne();

        System.assert(vpsTrafficTotalsResposne1.equals(vpsTrafficTotalsResposne2));
        System.assert(vpsTrafficTotalsResposne3.equals(vpsTrafficTotalsResposne4));
        System.assertEquals(vpsTrafficTotalsResposne1.hashCode(), vpsTrafficTotalsResposne2.hashCode());
        System.assertEquals(vpsTrafficTotalsResposne3.hashCode(), vpsTrafficTotalsResposne4.hashCode());
    }
}
