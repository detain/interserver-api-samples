<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetScrubIpDetails200ResponseFilterFirewallFiltersInner
{
    #[DTA\Data(field: "daddr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $daddr = null;

    #[DTA\Data(field: "dest", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $dest = null;

    #[DTA\Data(field: "filter_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $filter_name = null;

    #[DTA\Data(field: "destination_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $destination_ip = null;

    #[DTA\Data(field: "filter", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $filter = null;

}
