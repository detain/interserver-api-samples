<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class UpdateTicketResponseSchema
{
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "message", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $message = null;

}
