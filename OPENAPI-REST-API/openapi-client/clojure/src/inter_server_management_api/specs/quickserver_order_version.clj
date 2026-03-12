(ns inter-server-management-api.specs.quickserver-order-version
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-order-version-centosstream8 :refer :all]
            )
  (:import (java.io File)))


(def quickserver-order-version-data
  {
   (ds/opt :centosstream-8) quickserver-order-version-centosstream8-spec
   })

(def quickserver-order-version-spec
  (ds/spec
    {:name ::quickserver-order-version
     :spec quickserver-order-version-data}))
