<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * (optional) File attachments to include in the email.  The file contents must be base64
 */
class MailAttachment
{
    /**
     * The filename of the attached file.
     */
    #[DTA\Data(field: "filename")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $filename = null;

    /**
     * The file contents base64 encoded
     */
    #[DTA\Data(field: "data")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $data = null;

}
