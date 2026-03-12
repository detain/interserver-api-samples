<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class QuickserverServiceExtra
{
    /**
     * Platform information
     */
    #[DTA\Data(field: "platform", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $platform = null;

}
