<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class GetOrderDetail200ResponseIpsInner
{
    #[DTA\Data(field: "service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $service_id = null;

    #[DTA\Data(field: "service_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_module = null;

    #[DTA\Data(field: "service_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_hostname = null;

}
