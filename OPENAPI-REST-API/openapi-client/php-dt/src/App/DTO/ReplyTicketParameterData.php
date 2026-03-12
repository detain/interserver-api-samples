<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for replyTicket
 */
class ReplyTicketParameterData
{
    /**
     * The ticket ID number.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "float"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "float"], subset: "path")]
    public float|null $id = null;

}
