(ns inter-server-management-api.specs.server-order-cpu-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-cpu :refer :all]
            )
  (:import (java.io File)))


(def server-order-cpu-li-data
  {
   (ds/opt :254) server-order-cpu-spec
   })

(def server-order-cpu-li-spec
  (ds/spec
    {:name ::server-order-cpu-li
     :spec server-order-cpu-li-data}))
