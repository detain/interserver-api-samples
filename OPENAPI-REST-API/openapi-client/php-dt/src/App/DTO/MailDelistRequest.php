<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Payload for removing a sender from mail blocklists.
 */
class MailDelistRequest
{
    /**
     * Email address to delist.
     */
    #[DTA\Data(field: "unblock", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $unblock = null;

}
