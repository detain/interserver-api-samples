@isTest
private class OASVpsTemplateRowTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = vpsTemplateRow1;
        OASVpsTemplateRow vpsTemplateRow3 = new OASVpsTemplateRow();
        OASVpsTemplateRow vpsTemplateRow4 = vpsTemplateRow3;

        System.assert(vpsTemplateRow1.equals(vpsTemplateRow2));
        System.assert(vpsTemplateRow2.equals(vpsTemplateRow1));
        System.assert(vpsTemplateRow1.equals(vpsTemplateRow1));
        System.assert(vpsTemplateRow3.equals(vpsTemplateRow4));
        System.assert(vpsTemplateRow4.equals(vpsTemplateRow3));
        System.assert(vpsTemplateRow3.equals(vpsTemplateRow3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow3 = new OASVpsTemplateRow();
        OASVpsTemplateRow vpsTemplateRow4 = new OASVpsTemplateRow();

        System.assert(vpsTemplateRow1.equals(vpsTemplateRow2));
        System.assert(vpsTemplateRow2.equals(vpsTemplateRow1));
        System.assert(vpsTemplateRow3.equals(vpsTemplateRow4));
        System.assert(vpsTemplateRow4.equals(vpsTemplateRow3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = new OASVpsTemplateRow();

        System.assertEquals(false, vpsTemplateRow1.equals('foo'));
        System.assertEquals(false, vpsTemplateRow2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = new OASVpsTemplateRow();
        OASVpsTemplateRow vpsTemplateRow3;

        System.assertEquals(false, vpsTemplateRow1.equals(vpsTemplateRow3));
        System.assertEquals(false, vpsTemplateRow2.equals(vpsTemplateRow3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = new OASVpsTemplateRow();

        System.assertEquals(vpsTemplateRow1.hashCode(), vpsTemplateRow1.hashCode());
        System.assertEquals(vpsTemplateRow2.hashCode(), vpsTemplateRow2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsTemplateRow vpsTemplateRow1 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow2 = OASVpsTemplateRow.getExample();
        OASVpsTemplateRow vpsTemplateRow3 = new OASVpsTemplateRow();
        OASVpsTemplateRow vpsTemplateRow4 = new OASVpsTemplateRow();

        System.assert(vpsTemplateRow1.equals(vpsTemplateRow2));
        System.assert(vpsTemplateRow3.equals(vpsTemplateRow4));
        System.assertEquals(vpsTemplateRow1.hashCode(), vpsTemplateRow2.hashCode());
        System.assertEquals(vpsTemplateRow3.hashCode(), vpsTemplateRow4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsTemplateRow vpsTemplateRow = new OASVpsTemplateRow();
        Map<String, String> x-property-mappings = vpsTemplateRow.getx-property-mappings();
        System.assertEquals('templateId', x-property-mappings.get('template_id'));
        System.assertEquals('templateType', x-property-mappings.get('template_type'));
        System.assertEquals('templateOs', x-property-mappings.get('template_os'));
        System.assertEquals('templateVersion', x-property-mappings.get('template_version'));
        System.assertEquals('templateBits', x-property-mappings.get('template_bits'));
        System.assertEquals('templateFile', x-property-mappings.get('template_file'));
        System.assertEquals('templateAvailable', x-property-mappings.get('template_available'));
        System.assertEquals('templateName', x-property-mappings.get('template_name'));
        System.assertEquals('templateDir', x-property-mappings.get('template_dir'));
    }
}
