<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DownloadQsBackup200Response
{
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    /**
     * A pre-signed download URL valid for 24 hours.
     */
    #[DTA\Data(field: "url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $url = null;

}
