<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class Quickserver
{
    #[DTA\Data(field: "serviceInfo")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverServiceInfo::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverServiceInfo::class])]
    public \App\DTO\QuickserverServiceInfo|null $service_info = null;

    #[DTA\Data(field: "client_links")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection71::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection71::class])]
    public \App\DTO\Collection71|null $client_links = null;

    #[DTA\Data(field: "billingDetails")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverBillingDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverBillingDetails::class])]
    public \App\DTO\QuickserverBillingDetails|null $billing_details = null;

    /**
     * Currency of the customer
     */
    #[DTA\Data(field: "custCurrency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency = null;

    /**
     * Currency symbol of the customer
     */
    #[DTA\Data(field: "custCurrencySymbol")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_currency_symbol = null;

    #[DTA\Data(field: "serviceMaster")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverServiceMaster::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverServiceMaster::class])]
    public \App\DTO\QuickserverServiceMaster|null $service_master = null;

    /**
     * Package name
     */
    #[DTA\Data(field: "package")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $package = null;

    /**
     * Operating system template
     */
    #[DTA\Data(field: "os_template")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os_template = null;

    #[DTA\Data(field: "serviceExtra")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverServiceExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverServiceExtra::class])]
    public \App\DTO\QuickserverServiceExtra|null $service_extra = null;

    #[DTA\Data(field: "extraInfoTables")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\QuickserverExtraInfoTables::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\QuickserverExtraInfoTables::class])]
    public \App\DTO\QuickserverExtraInfoTables|null $extra_info_tables = null;

    /**
     * CPU graph data
     */
    #[DTA\Data(field: "cpu_graph_data")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cpu_graph_data = null;

    /**
     * Bandwidth x-axis data
     */
    #[DTA\Data(field: "bandwidth_xaxis")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bandwidth_xaxis = null;

    /**
     * Bandwidth y-axis data
     */
    #[DTA\Data(field: "bandwidth_yaxis")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bandwidth_yaxis = null;

    /**
     * Module information
     */
    #[DTA\Data(field: "module")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $module = null;

    /**
     * Authentication token
     */
    #[DTA\Data(field: "token")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $token = null;

    /**
     * Used disk space
     */
    #[DTA\Data(field: "service_disk_used")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_disk_used = null;

    /**
     * Total disk space
     */
    #[DTA\Data(field: "service_disk_total")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_disk_total = null;

    /**
     * Disk usage percentage
     */
    #[DTA\Data(field: "disk_percentage")]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $disk_percentage = null;

    /**
     * Memory information
     */
    #[DTA\Data(field: "memory")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $memory = null;

    /**
     * HDD information
     */
    #[DTA\Data(field: "hdd")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hdd = null;

    #[DTA\Data(field: "service_overview_extra")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection74::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection74::class])]
    public \App\DTO\Collection74|null $service_overview_extra = null;

}
