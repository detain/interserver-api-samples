<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Create firewall rule for your ip
 */
class CreateFilter
{
    #[DTA\Data(field: "filter_type")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $filter_type = null;

    #[DTA\Data(field: "port")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $port = null;

}
