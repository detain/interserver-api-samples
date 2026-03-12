<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Vps&#x60; &#x60;GET&#x60; request.
 */
class VpsRow
{
    /**
     * The id of the vps.
     */
    #[DTA\Data(field: "vps_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_id = null;

    /**
     * The name of the vps.
     */
    #[DTA\Data(field: "vps_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_name = null;

    /**
     * The repeat invoices cost of the vps.
     */
    #[DTA\Data(field: "repeat_invoices_cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $repeat_invoices_cost = null;

    /**
     * The hostname of the vps.
     */
    #[DTA\Data(field: "vps_hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_hostname = null;

    /**
     * The ip of the vps.
     */
    #[DTA\Data(field: "vps_ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_ip = null;

    /**
     * The status of the vps.
     */
    #[DTA\Data(field: "vps_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_status = null;

    /**
     * The services name of the vps.
     */
    #[DTA\Data(field: "services_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * The comment of the vps.
     */
    #[DTA\Data(field: "vps_comment")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $vps_comment = null;

}
