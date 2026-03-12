<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Affiliate Web Traffic Entry
 */
class AffiliateTrafficRow
{
    #[DTA\Data(field: "traffic_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_id = null;

    #[DTA\Data(field: "traffic_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_ip = null;

    #[DTA\Data(field: "traffic_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_url = null;

    #[DTA\Data(field: "traffic_affiliate", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_affiliate = null;

    #[DTA\Data(field: "traffic_referrer", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_referrer = null;

    #[DTA\Data(field: "traffic_timestamp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $traffic_timestamp = null;

}
