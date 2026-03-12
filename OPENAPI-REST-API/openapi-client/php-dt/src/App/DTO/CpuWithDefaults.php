<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class CpuWithDefaults
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    #[DTA\Data(field: "speed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $speed = null;

    #[DTA\Data(field: "num_cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cores = null;

    #[DTA\Data(field: "num_cpus", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cpus = null;

    #[DTA\Data(field: "benchmark", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $benchmark = null;

    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $monthly_price = null;

    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

    #[DTA\Data(field: "max_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_ram = null;

    #[DTA\Data(field: "min_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $min_ram = null;

    #[DTA\Data(field: "max_lff", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_lff = null;

    #[DTA\Data(field: "max_sff", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_sff = null;

    #[DTA\Data(field: "max_nve", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_nve = null;

    #[DTA\Data(field: "visible", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $visible = null;

    #[DTA\Data(field: "active", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $active = null;

    #[DTA\Data(field: "memory_det", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\MemoryOption::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\MemoryOption::class])]
    public \App\DTO\MemoryOption|null $memory_det = null;

    #[DTA\Data(field: "hd_det", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HardDrive::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HardDrive::class])]
    public \App\DTO\HardDrive|null $hd_det = null;

    #[DTA\Data(field: "monthly_fee", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_fee = null;

}
