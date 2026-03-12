<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverOrderServerDetails381
{
    /**
     * CPU details of the server.
     */
    #[DTA\Data(field: "cpu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cpu = null;

    /**
     * RAM capacity of the server.
     */
    #[DTA\Data(field: "ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ram = null;

    /**
     * Hard disk capacity of the server.
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hd = null;

    /**
     * Number of CPU cores.
     */
    #[DTA\Data(field: "cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cores = null;

    /**
     * Cost of the server.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cost = null;

}
