(ns inter-server-management-api.specs.server-order-bandwidth-li
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-bandwidth :refer :all]
            )
  (:import (java.io File)))


(def server-order-bandwidth-li-data
  {
   (ds/opt :15) server-order-bandwidth-spec
   })

(def server-order-bandwidth-li-spec
  (ds/spec
    {:name ::server-order-bandwidth-li
     :spec server-order-bandwidth-li-data}))
