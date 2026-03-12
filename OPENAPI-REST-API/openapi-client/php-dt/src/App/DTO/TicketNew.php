<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * New helpdesk ticket request.
 */
class TicketNew
{
    #[DTA\Data(field: "subject")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

    #[DTA\Data(field: "body")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $body = null;

    #[DTA\Data(field: "service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_id = null;

    #[DTA\Data(field: "service_module", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_module = null;

}
