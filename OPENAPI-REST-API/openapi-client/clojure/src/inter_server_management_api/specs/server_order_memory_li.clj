(ns inter-server-management-api.specs.server-order-memory-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-memory-li-254 :refer :all]
            )
  (:import (java.io File)))


(def server-order-memory-li-data
  {
   (ds/opt :254) server-order-memory-li-254-spec
   })

(def server-order-memory-li-spec
  (ds/spec
    {:name ::server-order-memory-li
     :spec server-order-memory-li-data}))
