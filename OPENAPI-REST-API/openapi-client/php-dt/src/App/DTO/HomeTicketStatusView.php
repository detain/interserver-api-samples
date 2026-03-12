<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Ticket statuses with view numbers.
 */
class HomeTicketStatusView
{
    /**
     * Status corresponding to view number 4.
     */
    #[DTA\Data(field: "4", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_4 = null;

    /**
     * Status corresponding to view number 5.
     */
    #[DTA\Data(field: "5", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_5 = null;

    /**
     * Status corresponding to view number 6.
     */
    #[DTA\Data(field: "6", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_6 = null;

}
