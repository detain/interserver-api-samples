(ns inter-server-management-api.specs.server-order-memory-li-254
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-memory :refer :all]
            )
  (:import (java.io File)))


(def server-order-memory-li-254-data
  {
   (ds/opt :65) server-order-memory-spec
   })

(def server-order-memory-li-254-spec
  (ds/spec
    {:name ::server-order-memory-li-254
     :spec server-order-memory-li-254-data}))
