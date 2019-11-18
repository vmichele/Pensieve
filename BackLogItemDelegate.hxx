#ifndef BACKLOGITEMDELEGATE_HXX
#define BACKLOGITEMDELEGATE_HXX

#include <QStyledItemDelegate>


class BackLogItemDelegate: public QStyledItemDelegate
{
  Q_OBJECT

public:
  BackLogItemDelegate(QObject* p_parent = nullptr);

  void paint(QPainter* p_painter, QStyleOptionViewItem const& p_option, QModelIndex const& p_index) const override;
  QSize sizeHint(QStyleOptionViewItem const& p_option, QModelIndex const& p_index) const override;
};

#endif