(ns inter-server-management-api.specs.quickserver-order-version-centosstream8
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-order-version-centosstream8-data
  {
   (ds/opt :centosstream-8) string?
   })

(def quickserver-order-version-centosstream8-spec
  (ds/spec
    {:name ::quickserver-order-version-centosstream8
     :spec quickserver-order-version-centosstream8-data}))
