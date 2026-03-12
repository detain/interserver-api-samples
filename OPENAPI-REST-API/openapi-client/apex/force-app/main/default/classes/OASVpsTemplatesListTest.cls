@isTest
private class OASVpsTemplatesListTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = vpsTemplatesList1;
        OASVpsTemplatesList vpsTemplatesList3 = new OASVpsTemplatesList();
        OASVpsTemplatesList vpsTemplatesList4 = vpsTemplatesList3;

        System.assert(vpsTemplatesList1.equals(vpsTemplatesList2));
        System.assert(vpsTemplatesList2.equals(vpsTemplatesList1));
        System.assert(vpsTemplatesList1.equals(vpsTemplatesList1));
        System.assert(vpsTemplatesList3.equals(vpsTemplatesList4));
        System.assert(vpsTemplatesList4.equals(vpsTemplatesList3));
        System.assert(vpsTemplatesList3.equals(vpsTemplatesList3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList3 = new OASVpsTemplatesList();
        OASVpsTemplatesList vpsTemplatesList4 = new OASVpsTemplatesList();

        System.assert(vpsTemplatesList1.equals(vpsTemplatesList2));
        System.assert(vpsTemplatesList2.equals(vpsTemplatesList1));
        System.assert(vpsTemplatesList3.equals(vpsTemplatesList4));
        System.assert(vpsTemplatesList4.equals(vpsTemplatesList3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = new OASVpsTemplatesList();

        System.assertEquals(false, vpsTemplatesList1.equals('foo'));
        System.assertEquals(false, vpsTemplatesList2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = new OASVpsTemplatesList();
        OASVpsTemplatesList vpsTemplatesList3;

        System.assertEquals(false, vpsTemplatesList1.equals(vpsTemplatesList3));
        System.assertEquals(false, vpsTemplatesList2.equals(vpsTemplatesList3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = new OASVpsTemplatesList();

        System.assertEquals(vpsTemplatesList1.hashCode(), vpsTemplatesList1.hashCode());
        System.assertEquals(vpsTemplatesList2.hashCode(), vpsTemplatesList2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTemplatesList vpsTemplatesList1 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList2 = OASVpsTemplatesList.getExample();
        OASVpsTemplatesList vpsTemplatesList3 = new OASVpsTemplatesList();
        OASVpsTemplatesList vpsTemplatesList4 = new OASVpsTemplatesList();

        System.assert(vpsTemplatesList1.equals(vpsTemplatesList2));
        System.assert(vpsTemplatesList3.equals(vpsTemplatesList4));
        System.assertEquals(vpsTemplatesList1.hashCode(), vpsTemplatesList2.hashCode());
        System.assertEquals(vpsTemplatesList3.hashCode(), vpsTemplatesList4.hashCode());
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASVpsTemplatesList vpsTemplatesList = new OASVpsTemplatesList();
        System.assertEquals(new List<OASVpsTemplateRow>(), vpsTemplatesList.templates);
    }
}
