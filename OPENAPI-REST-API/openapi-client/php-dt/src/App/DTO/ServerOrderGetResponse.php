<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 */
class ServerOrderGetResponse
{
    #[DTA\Data(field: "form_values")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\FormValues::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\FormValues::class])]
    public \App\DTO\FormValues|null $form_values = null;

    #[DTA\Data(field: "config_ids")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ConfigIds::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ConfigIds::class])]
    public \App\DTO\ConfigIds|null $config_ids = null;

    #[DTA\Data(field: "cpu")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cpu = null;

    #[DTA\Data(field: "cpu_li")]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $cpu_li = null;

    #[DTA\Data(field: "config_li")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ConfigLists::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ConfigLists::class])]
    public \App\DTO\ConfigLists|null $config_li = null;

    #[DTA\Data(field: "frequency")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $frequency = null;

    #[DTA\Data(field: "currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    #[DTA\Data(field: "country")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "step")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $step = null;

    #[DTA\Data(field: "field_label", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $field_label = null;

    #[DTA\Data(field: "cpu_cores", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $cpu_cores = null;

    #[DTA\Data(field: "currencySymbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

    #[DTA\Data(field: "custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $custid = null;

    #[DTA\Data(field: "ima", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ima = null;

    #[DTA\Data(field: "regions", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $regions = null;

    #[DTA\Data(field: "asset_servers", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $asset_servers = null;

    #[DTA\Data(field: "buy_it_servers", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $buy_it_servers = null;

    #[DTA\Data(field: "display_showmore", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $display_showmore = null;

    #[DTA\Data(field: "cust_discount", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $cust_discount = null;

}
