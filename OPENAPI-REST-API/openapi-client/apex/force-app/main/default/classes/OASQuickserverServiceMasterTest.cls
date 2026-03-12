@isTest
private class OASQuickserverServiceMasterTest {
    @isTest
    private static void equalsSameInstance() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = quickserverServiceMaster1;
        OASQuickserverServiceMaster quickserverServiceMaster3 = new OASQuickserverServiceMaster();
        OASQuickserverServiceMaster quickserverServiceMaster4 = quickserverServiceMaster3;

        System.assert(quickserverServiceMaster1.equals(quickserverServiceMaster2));
        System.assert(quickserverServiceMaster2.equals(quickserverServiceMaster1));
        System.assert(quickserverServiceMaster1.equals(quickserverServiceMaster1));
        System.assert(quickserverServiceMaster3.equals(quickserverServiceMaster4));
        System.assert(quickserverServiceMaster4.equals(quickserverServiceMaster3));
        System.assert(quickserverServiceMaster3.equals(quickserverServiceMaster3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster3 = new OASQuickserverServiceMaster();
        OASQuickserverServiceMaster quickserverServiceMaster4 = new OASQuickserverServiceMaster();

        System.assert(quickserverServiceMaster1.equals(quickserverServiceMaster2));
        System.assert(quickserverServiceMaster2.equals(quickserverServiceMaster1));
        System.assert(quickserverServiceMaster3.equals(quickserverServiceMaster4));
        System.assert(quickserverServiceMaster4.equals(quickserverServiceMaster3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = new OASQuickserverServiceMaster();

        System.assertEquals(false, quickserverServiceMaster1.equals('foo'));
        System.assertEquals(false, quickserverServiceMaster2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = new OASQuickserverServiceMaster();
        OASQuickserverServiceMaster quickserverServiceMaster3;

        System.assertEquals(false, quickserverServiceMaster1.equals(quickserverServiceMaster3));
        System.assertEquals(false, quickserverServiceMaster2.equals(quickserverServiceMaster3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = new OASQuickserverServiceMaster();

        System.assertEquals(quickserverServiceMaster1.hashCode(), quickserverServiceMaster1.hashCode());
        System.assertEquals(quickserverServiceMaster2.hashCode(), quickserverServiceMaster2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASQuickserverServiceMaster quickserverServiceMaster1 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster2 = OASQuickserverServiceMaster.getExample();
        OASQuickserverServiceMaster quickserverServiceMaster3 = new OASQuickserverServiceMaster();
        OASQuickserverServiceMaster quickserverServiceMaster4 = new OASQuickserverServiceMaster();

        System.assert(quickserverServiceMaster1.equals(quickserverServiceMaster2));
        System.assert(quickserverServiceMaster3.equals(quickserverServiceMaster4));
        System.assertEquals(quickserverServiceMaster1.hashCode(), quickserverServiceMaster2.hashCode());
        System.assertEquals(quickserverServiceMaster3.hashCode(), quickserverServiceMaster4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASQuickserverServiceMaster quickserverServiceMaster = new OASQuickserverServiceMaster();
        Map<String, String> x-property-mappings = quickserverServiceMaster.getx-property-mappings();
        System.assertEquals('qsId', x-property-mappings.get('qs_id'));
        System.assertEquals('qsName', x-property-mappings.get('qs_name'));
        System.assertEquals('qsIp', x-property-mappings.get('qs_ip'));
        System.assertEquals('qsType', x-property-mappings.get('qs_type'));
        System.assertEquals('qsHdsize', x-property-mappings.get('qs_hdsize'));
        System.assertEquals('qsHdfree', x-property-mappings.get('qs_hdfree'));
        System.assertEquals('qsBits', x-property-mappings.get('qs_bits'));
        System.assertEquals('qsLoad', x-property-mappings.get('qs_load'));
        System.assertEquals('qsRam', x-property-mappings.get('qs_ram'));
        System.assertEquals('qsCpuModel', x-property-mappings.get('qs_cpu_model'));
        System.assertEquals('qsCpuMhz', x-property-mappings.get('qs_cpu_mhz'));
        System.assertEquals('qsLocation', x-property-mappings.get('qs_location'));
        System.assertEquals('qsAvailable', x-property-mappings.get('qs_available'));
        System.assertEquals('qsCost', x-property-mappings.get('qs_cost'));
        System.assertEquals('qsLastUpdate', x-property-mappings.get('qs_last_update'));
        System.assertEquals('qsCores', x-property-mappings.get('qs_cores'));
        System.assertEquals('qsIowait', x-property-mappings.get('qs_iowait'));
        System.assertEquals('qsRaidStatus', x-property-mappings.get('qs_raid_status'));
        System.assertEquals('qsDriveType', x-property-mappings.get('qs_drive_type'));
        System.assertEquals('qsOrder', x-property-mappings.get('qs_order'));
        System.assertEquals('qsRaidBuilding', x-property-mappings.get('qs_raid_building'));
        System.assertEquals('qsKernel', x-property-mappings.get('qs_kernel'));
        System.assertEquals('qsIoping', x-property-mappings.get('qs_ioping'));
        System.assertEquals('qsSpeed', x-property-mappings.get('qs_speed'));
        System.assertEquals('qsDistro', x-property-mappings.get('qs_distro'));
        System.assertEquals('qsDistroVersion', x-property-mappings.get('qs_distro_version'));
        System.assertEquals('qsBytesSecIn', x-property-mappings.get('qs_bytes_sec_in'));
        System.assertEquals('qsBytesSecOut', x-property-mappings.get('qs_bytes_sec_out'));
        System.assertEquals('qsPacketsSecIn', x-property-mappings.get('qs_packets_sec_in'));
        System.assertEquals('qsPacketsSecOut', x-property-mappings.get('qs_packets_sec_out'));
        System.assertEquals('qsLastInstallTime', x-property-mappings.get('qs_last_install_time'));
        System.assertEquals('qsPartitions', x-property-mappings.get('qs_partitions'));
        System.assertEquals('qsCpuFlags', x-property-mappings.get('qs_cpu_flags'));
    }
}
