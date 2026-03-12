@isTest
private class OASMailStatsTypeVolumeToTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = mailStatsTypeVolumeTo1;
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo3 = new OASMailStatsTypeVolumeTo();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo4 = mailStatsTypeVolumeTo3;

        System.assert(mailStatsTypeVolumeTo1.equals(mailStatsTypeVolumeTo2));
        System.assert(mailStatsTypeVolumeTo2.equals(mailStatsTypeVolumeTo1));
        System.assert(mailStatsTypeVolumeTo1.equals(mailStatsTypeVolumeTo1));
        System.assert(mailStatsTypeVolumeTo3.equals(mailStatsTypeVolumeTo4));
        System.assert(mailStatsTypeVolumeTo4.equals(mailStatsTypeVolumeTo3));
        System.assert(mailStatsTypeVolumeTo3.equals(mailStatsTypeVolumeTo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo3 = new OASMailStatsTypeVolumeTo();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo4 = new OASMailStatsTypeVolumeTo();

        System.assert(mailStatsTypeVolumeTo1.equals(mailStatsTypeVolumeTo2));
        System.assert(mailStatsTypeVolumeTo2.equals(mailStatsTypeVolumeTo1));
        System.assert(mailStatsTypeVolumeTo3.equals(mailStatsTypeVolumeTo4));
        System.assert(mailStatsTypeVolumeTo4.equals(mailStatsTypeVolumeTo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = new OASMailStatsTypeVolumeTo();

        System.assertEquals(false, mailStatsTypeVolumeTo1.equals('foo'));
        System.assertEquals(false, mailStatsTypeVolumeTo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = new OASMailStatsTypeVolumeTo();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo3;

        System.assertEquals(false, mailStatsTypeVolumeTo1.equals(mailStatsTypeVolumeTo3));
        System.assertEquals(false, mailStatsTypeVolumeTo2.equals(mailStatsTypeVolumeTo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = new OASMailStatsTypeVolumeTo();

        System.assertEquals(mailStatsTypeVolumeTo1.hashCode(), mailStatsTypeVolumeTo1.hashCode());
        System.assertEquals(mailStatsTypeVolumeTo2.hashCode(), mailStatsTypeVolumeTo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo1 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo2 = OASMailStatsTypeVolumeTo.getExample();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo3 = new OASMailStatsTypeVolumeTo();
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo4 = new OASMailStatsTypeVolumeTo();

        System.assert(mailStatsTypeVolumeTo1.equals(mailStatsTypeVolumeTo2));
        System.assert(mailStatsTypeVolumeTo3.equals(mailStatsTypeVolumeTo4));
        System.assertEquals(mailStatsTypeVolumeTo1.hashCode(), mailStatsTypeVolumeTo2.hashCode());
        System.assertEquals(mailStatsTypeVolumeTo3.hashCode(), mailStatsTypeVolumeTo4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASMailStatsTypeVolumeTo mailStatsTypeVolumeTo = new OASMailStatsTypeVolumeTo();
        Map<String, String> x-property-mappings = mailStatsTypeVolumeTo.getx-property-mappings();
        System.assertEquals('clientdomainCom', x-property-mappings.get('client@domain.com'));
        System.assertEquals('usersiteNet', x-property-mappings.get('user@site.net'));
        System.assertEquals('salescompanyCom', x-property-mappings.get('sales@company.com'));
        System.assertEquals('clientanothersiteCom', x-property-mappings.get('client@anothersite.com'));
    }
}
