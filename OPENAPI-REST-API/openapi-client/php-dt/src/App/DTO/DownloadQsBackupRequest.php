<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DownloadQsBackupRequest
{
    /**
     * The backup filename to download.
     */
    #[DTA\Data(field: "file")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $file = null;

}
