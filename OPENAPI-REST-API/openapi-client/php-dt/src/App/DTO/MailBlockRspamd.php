<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * This is a block entry from the rspamd block list.
 */
class MailBlockRspamd
{
    #[DTA\Data(field: "from")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $from = null;

    #[DTA\Data(field: "subject")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

}
