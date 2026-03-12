<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Detailed ticket information
 */
class TicketDetails
{
    #[DTA\Data(field: "ticketid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ticketid = null;

    #[DTA\Data(field: "ticketmaskid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ticketmaskid = null;

    #[DTA\Data(field: "department", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $department = null;

    #[DTA\Data(field: "status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    #[DTA\Data(field: "priority", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $priority = null;

    #[DTA\Data(field: "subject", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

    #[DTA\Data(field: "created_on", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $created_on = null;

    #[DTA\Data(field: "updated_on", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $updated_on = null;

}
