(ns inter-server-management-api.specs.servers-buy-now-error
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def servers-buy-now-error-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   (ds/opt :errors) (s/coll-of string?)
   })

(def servers-buy-now-error-spec
  (ds/spec
    {:name ::servers-buy-now-error
     :spec servers-buy-now-error-data}))
