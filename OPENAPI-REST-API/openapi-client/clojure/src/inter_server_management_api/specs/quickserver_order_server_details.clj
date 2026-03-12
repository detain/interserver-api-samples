(ns inter-server-management-api.specs.quickserver-order-server-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-order-server-details381 :refer :all]
            )
  (:import (java.io File)))


(def quickserver-order-server-details-data
  {
   (ds/opt :381) quickserver-order-server-details381-spec
   })

(def quickserver-order-server-details-spec
  (ds/spec
    {:name ::quickserver-order-server-details
     :spec quickserver-order-server-details-data}))
