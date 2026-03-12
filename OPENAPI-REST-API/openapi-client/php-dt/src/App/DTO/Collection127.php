<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectList", ["type" => \App\DTO\VPSTrafficDataDataSectionResponse::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\VPSTrafficDataDataSectionResponse::class]]
]])]
class Collection127 extends \ArrayObject
{
}
