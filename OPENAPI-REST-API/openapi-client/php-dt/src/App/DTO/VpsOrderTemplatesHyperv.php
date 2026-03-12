<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class VpsOrderTemplatesHyperv
{
    #[DTA\Data(field: "windows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\VpsOrderTemplatesHypervWindows::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\VpsOrderTemplatesHypervWindows::class])]
    public \App\DTO\VpsOrderTemplatesHypervWindows|null $windows = null;

}
