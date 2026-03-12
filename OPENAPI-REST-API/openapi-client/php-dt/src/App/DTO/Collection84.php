<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectMap", ["type" => \App\DTO\ScrubIpFilterTypesFiltersValue::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\ScrubIpFilterTypesFiltersValue::class]]
]])]
class Collection84 extends \ArrayObject
{
}
