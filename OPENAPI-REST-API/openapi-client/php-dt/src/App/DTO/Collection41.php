<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarMap", ["type" => "object"])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => "object"]]
]])]
class Collection41 extends \ArrayObject
{
}
