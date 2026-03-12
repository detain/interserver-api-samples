<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Post reply to your ticket
 */
class ReplyTicketRequest
{
    #[DTA\Data(field: "content", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $content = null;

}
