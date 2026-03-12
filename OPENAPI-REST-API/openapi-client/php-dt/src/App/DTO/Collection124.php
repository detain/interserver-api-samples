<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("DateTimeList")]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "DateTime"]
]])]
class Collection124 extends \ArrayObject
{
}
