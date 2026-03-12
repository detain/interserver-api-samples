<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BuyItNowRowCpuInner
{
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    #[DTA\Data(field: "speed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $speed = null;

    #[DTA\Data(field: "num_cpus", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cpus = null;

    #[DTA\Data(field: "num_cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cores = null;

}
